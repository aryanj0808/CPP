#include<iostream> 
using namespace std;
class YTvideo{
	protected:
	string title;
	float rating;
	public:
		 YTvideo(string s, float r){
			title=s;
			rating=r;
		}
		virtual void display(){}
		};
class videoLength : public YTvideo{
	float length;
	public:
	videoLength(string s,float r,float vl) : YTvideo(s,r){
		length=vl;
	}
	void display(void){
		cout<<"Title of a you tube video is : "<<title<<endl;
		cout<<"Length of video is : "<<length<<endl;
		cout<<"Rating of video is : "<<rating<<endl;
	}
};
class videoText : public YTvideo{
int Txtsize;
public:
	videoText(string s,float r,int size) : YTvideo(s,r){
		Txtsize=size;
	}
	void display(void){
		cout<<"Title of a you tube video is : "<<title<<endl;
		cout<<"Text Size : "<<Txtsize<<endl;
		cout<<"Rating of Text is : "<<rating<<endl;
	}
};
int main(){ 

string title;
float rating , vl;
int Txtsize;
	title="Monster aj";
	rating=4.45;
	vl=6.5;
	videoLength aj_YT_video(title,rating,vl);
	
	title="Monster aj";
	rating=4.01;
    Txtsize=780;
	videoText aj_YT_videoTxt(title,rating,Txtsize);

  YTvideo* rts[2];  //Pointer decleard
rts[0]= &aj_YT_video;	//asign to derived class
	
rts[1]=&aj_YT_videoTxt;//asign to derived class
rts[0]->display();
rts[1]->display();	
	
	return 0;
}
