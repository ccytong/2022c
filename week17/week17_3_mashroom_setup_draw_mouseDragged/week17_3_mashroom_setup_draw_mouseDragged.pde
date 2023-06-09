PImage mashroom, star;
void setup(){
  size(600,600);
  mashroom=loadImage("mashroom.png");
  star=loadImage("star.jpg");
}
void draw(){
  background(255);
  image(mashroom,0,0,250,250);
  image(star,x,y);
}
float x=300, y=0;
void mouseDragged(){
  x+=(mouseX-pmouseX);
  y+=(mouseY-pmouseY);
}
