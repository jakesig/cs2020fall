/*Jacob Sigman
  10/21/20
  CS-102
  Homework 8
  chart.js
*/

function toggle()
{
  object = document.getElementById("testme")
  if( object.className == "visible" )
  {
    object.className = "invisible";
  }
  else
  {
    object.className = "visible";
  }
}