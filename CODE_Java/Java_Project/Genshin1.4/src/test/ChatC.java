package test;

import java.io.*; 
import java.awt.*; 
import java.awt.event.*; 
import java.net.*; 

public class ChatC extends Frame 
{ 
TextField tf=new TextField(20); 
TextArea ta=new TextArea(); 
Socket client; 
InputStream in; 
BufferedReader br; 
OutputStream out; 
BufferedWriter bw; 
public ChatC() 
{ 
super("Client"); 
add("North",tf); 
add("Center",ta); 
setSize(250,250); 
show(); 
try 
{ 
client=new Socket("127.0.0.1",5001); 
ta.append("Connect to:"+client.getInetAddress().getHostName()+"\n\n"); 
in=client.getInputStream(); 
br=new BufferedReader(new InputStreamReader(in)); 
out=client.getOutputStream(); 
bw=new BufferedWriter(new OutputStreamWriter(out)); 
} 
catch(IOException ioe){} 
while(true) 
{ 
try 
{ 
byte[] buf=new byte[200]; 
in.read(buf); 
String str=new String(buf); 
ta.append("Server say:"+str); 
ta.append("\n"); 
} 
catch(IOException e){} 
} 
} 
public boolean action(Event e,Object o) 
{ 
try 
{ 
String str=tf.getText(); 
byte[] buf=str.getBytes(); 
tf.setText(null); 
out.write(buf); 
ta.append("I say:"+str); 
ta.append("\n"); 
} 
catch(IOException ioe){} 
return true; 
} 

public static void main(String args[]) 
{ 
new ChatC(); 
} 
} 
