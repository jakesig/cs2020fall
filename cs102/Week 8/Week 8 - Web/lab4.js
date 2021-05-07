function toggle()
{
  object = document.getElementById("testme");
  object2 = document.getElementById("testme2");
  if( object.className == "visible")
  {
    object.className = "invisible";
  }
  if ( object2.className == "invisible")
  {
    object2.className = "visible";
  }
  else if (object.className == "invisible" )
  {
    object.className = "visible";
    object2.className = "invisible";
  }
}
