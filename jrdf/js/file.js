// document.getElementById('btn0').onclick = ()=>{
//     document.getElementById('res').innerHTML="hey";
// }
function fun()
{
    document.getElementById('res').append("0");
}
function fun1()
{
    document.getElementById('res').append("1");
}
function funmul()
{
    document.getElementById('res').append("*");
}
function fundiv()
{
    document.getElementById('res').append("/");
}
function funsub()
{
    document.getElementById('res').append("-");
}
function funadd()
{
    document.getElementById('res').append("+");
}
function funClr(){
    document.getElementById("res").innerHTML = "";
}
function mainfun(){
    var x = document.getElementById('res').textContent;
    let arr = x.split(/[\*\/ +-]/);
    let sign = "+-*/";
    var seq;
    for(var i = 0; i<x.length;i++)
    {
        if(sign.includes(x[i]))
        {
            seq+=x[i];
        }
    }
    seq=seq.substring(9);
    for(var i=0;i<arr.length;i++)
    {
        arr[i]=parseInt(arr[i],2);
    }
    let narr = "";
    var j=0;
    for(var i=0;i<arr.length;i++)
    {
        narr=narr+arr[i];
        if(j<seq.length)
        narr = narr + seq[j++];
    }
    console.log(eval(narr));
}