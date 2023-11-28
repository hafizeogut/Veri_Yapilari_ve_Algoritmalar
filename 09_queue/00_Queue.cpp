#include <iostream>
#define SIZE 5

using namespace std;

class Queue {
    private:
        int items[SIZE],front,rear;

    public:
        Queue() {
            front = -1;// kuyruğun baş kımı belirlendi.
            rear = -1;// kuyruğun son kımı belirlendi.
        }

    bool isFull(){
        if (front == 0 && rear== SIZE-1){//kuyruk dolu mu? 
            return true;
        }
        return false;
    }

    bool isEmpty(){//kuyruk boş mu?
        if(front == -1)
            return true;

        else    
            return false;
    }

    void enQueue(int element){
            if(isFull()){//Kuyruk dolu mu?
            cout << "Queue is full";
        }
        else{
            if (front == -1){//kuyruğun başı -1 ise
                front = 0;//0 yap
            }
            rear++;//kuyruğu  0 yap
            items[rear] = element;//
            cout<<endl<<"Inserted"<<element<<endl;
        }
    }

    int deQueue(){
        int element;
        if(isEmpty()){//kuyruk boş mu
            cout<< "Queue BOS"<<endl;
            return(-1);
        }
        else
        {
            element = items[front];//kuyruğun elemanını elemente ata
            if(front >= rear){
                front= -1;
                rear = -1;
            }/* Q'nun sadece bir elemanı var, bu yüzden kuyrugu sildikten sonra sıfırlıyoruz. */
            else{
                front++;
            }
            cout <<endl<<"Silindi ->"<<element<<endl;
            return(element);
        }
    }
    void display() {
        /*Kuyruk elemanlarını görtüleme*/
        int i;
        if(isEmpty()){
            cout<< endl<<"Bos queue"<<endl;
        }
        else{
            cout<<endl<<"Front index-> "<<front;
            cout<<endl<<"Elemanlar->";
            for (i = front; i<=rear; i++){
                cout<<items[i]<<" ";
            }
            cout<<endl<<"Rear index-> "<<rear <<endl;
        }
    }
    
};

int main(){
    Queue q;

    //deQueue bos kuyrukta mumkun değil
    q.deQueue();

    //enQueue 5 eleman 
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    //6.eleman sıra dolu olduğu için eklenemiyor
    q.enQueue(6);

    q.display();

    //deQueue ilk önce girilen öğwyi kaldırır,yani1
    q.deQueue();

    //şimdi sadece 4 elemanımız var
    q.display();

    return 0;
}