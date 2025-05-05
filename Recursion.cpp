// //0. basic code.
// // vid-
// #include <iostream>
// using namespace std;


// int main()
// { 
  
    
//   return 0;
// }



// //1. print days left for birthday
// #include <iostream>
// using namespace std;

// void fun(int n)
// {
//   if(n==0)
//   {
//       cout<<"happy birthday<<endl";
//       return;
//   }
//     cout<<n<<"days left for birthday"<<endl;
//     fun(n-1);
//   }

// int main()
// { 

//   fun(5);
    
//   return 0;
// }


// //2. print 1 to n
// #include <iostream>
// using namespace std;
// void print(int n)
// {
//   if(n==0)
//   {
//       return;
//   }
//     cout<<n<<endl;
//     print(n-1);
//   }

// int main()
// { 
//   // iteration way == recursive way(iteration means for loop)
//   // if maximum limit of stack reach and i want to enter more value in it known stack
//   // -overflow .
//   print(5);
    
//   return 0;
// }


// //3. print even numbers.
// #include <iostream>
// using namespace std;

// void even(int n)
// {
//   if(n==1)
//   {
//       return;
//   }
//   else if(n%2==0)
//     cout<<n<<endl;
//     even(n-1);
//   }

// int main()
// { 
  
//   even(20);
    
//   return 0;
// }


// //4. print 1to n.
// //vid -52
// #include <iostream>
// using namespace std;

// // two argument pass due we dont know about base condition.
// void print(int n,int num){
//   if(n==num){
//     cout<<n<<endl;
//     return;
//   }
//   cout<<n<<endl;
//   print(n+1,num);
// }

// int main()
// { 
//   print(1,9);
    
//   return 0;
// }


// //5. print 1to n by 1 argument.
// //vid -52
// #include <iostream>
// using namespace std;

// void print(int n){
//   if(n==1){
//     cout<<n<<endl;
//     return;
//   }
//   print(n-1);
//   cout<<n<<endl;
// }

// int main()
// { 
//   print(10);
    
//   return 0;
// }



// //6. print 1to n even number.
// //vid -52
// #include <iostream>
// using namespace std;

// void print(int n){
//   if(n==2){
//     cout<<n<<endl;
//     return;
//   }
//   print(n-2);
//   cout<<n<<endl;
// }

// int main()
// { 
  // int n=13;
  //   if(n%2!=0)
  //   n--;
  // print(n);
    
//   return 0;
// }


//7. factorial
//vid 53
// #include <iostream>
// using namespace std;

// int fact(int n){
//   if(n==1||n==0){
//     return 1; //return used due to we have to return fact(1) not print 1;
                 // we have to give ans at last so we use return instead of void
//   }
//   return n*fact(n-1); // return due we have to return fact(..) value 
// }

// int main()
// { 
//   int n=5;
//   if(n<0)
//   {
//     cout<<"fact not found";
//     return 0;
//   }
//   cout<<fact(n);
    
//   return 0;
// }

  
// //8. sum of N.
// // vid-53
// #include <iostream>
// using namespace std;

// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+sum(n-1);
// }

// int main()
// { 
    
//   cout<<sum(6);
    
//   return 0;
//  }


//9. power of 2
//vid 53
// #include <iostream>
// using namespace std;

// int power(int n,int N){
//        if(N==0){
//            return 1;
//        }
//        return n*power(n,N-1);
//    }

// int main() {
//    cout<<power(2,5)<<endl;

//     return 0;
// }


//10.sum of square of n number
//vid 53
// #include <iostream>
// using namespace std;

// int square(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*n+square(n-1);
// }

// int main() {
//     cout<<square(3);

//     return 0;
// }


//11. fibbo
//vid 54
// #include <iostream>
// using namespace std;

// int fibbo(int n){
//     if(n<=1)
//     return n;
    
//     return fibbo(n-1)+fibbo(n-2);
// }

// int main() {
//     cout<<fibbo(9)<<endl;

//     return 0;
// }


//12. nth stair
//vid 54
// #include <iostream>
// using namespace std;

// int stair(int n){
//     if(n<=1) //for 0 or for climb 1 stair there is only 1 way can possible.
//     return 1;
    
//     return stair(n-1)+stair(n-2); // pattern realton make by basic stairs form. .
// }

// int main() {
//     cout<<stair(4);

//     return 0;
// }


//13. greatest common division of 2 no.
// vid 54.
// #include <iostream>
// using namespace std;

// int gcd(int a,int b){
//     if(b==0)
//     return a;
    
//     return gcd(b,a%b);
// }

// int main() {
//     cout<<gcd(12,16);
    
//     return 0;
// }


//14.print array
//vid 55.
// #include <iostream>
// using namespace std;

// void print(int arr[],int index,int n){
//     if(index==n){
//         return;
//     }
    
//     cout<<arr[index]<<endl;
//     print(arr,index++, n);
// }

// int main() {
//     int arr[]={3,7,6,2,8};
//     print(arr,0,5);

//     return 0;
// }


//15.sum of all array element
//vid-55
// #include <iostream>
// using namespace std;

// int sum(int arr[],int index,int n){
//     if(index==n)
//     return 0;
    
//     return arr[index]+sum(arr,index+1,n);
// }

// int main() {
//     int arr[]={3,4,5,8,2};
//     cout<<sum(arr,0,5)<<" ";

//     return 0;
// }


//16.Min. element of all array element
//vid-55
// #include <iostream>
// using namespace std;

// int minelement(int arr[],int index,int n){
//     if(index==n-1)
//     return arr[index];
    
//     return min(arr[index],minelement(arr,index+1,n));
// }

// int main() {
//     int arr[]={3,4,1,2,8};
//     cout<<minelement(arr,0,5);

//     return 0;
// }


//17. chk palindrome
//vid-56
// #include <iostream>
// using namespace std;

// int pali(string str, int start,int end){
//     if(start>=end){
//         return 1;
//     }
//     if(str[start]!=str[end])
//     return 0;
//     else
//     return pali(str,start+1,end-1);
// }

// int main() {
//     string str="madam";
//     cout<<pali(str,0,4);
   
//     return 0;
// }


//18. count vowels
//vid-56
// #include <iostream>
// using namespace std;

// int vowels(string str,int index){
//     if(index<0)
//     return 0;
    
//     if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u')
//     return 1+vowels(str,index-1);
//     else
//     return vowels(str,index-1);
// }

// int main() {
//     string str="madasm";
//     cout<<vowels(str,5);
   
//     return 0;
// }


//19. reverse string with call by reference
//vid-56
// #include <iostream>
// using namespace std;

// void reverse(string &str,int start,int end){ 
//     if(start>=end)
//     return ;
    
//     char c=str[start];
//     str[start]=str[end];
//     str[end]=str[start];
//     reverse(str,start+1,end-1);
// }

// int main() {
//     string str="madasm";
//     reverse(str,0,5);
//     cout<<str;
   
//     return 0;
// }


//20. lower to upperCase
//vid-56
// #include <iostream>
// using namespace std;

// void upp(string &str,int index){
//     if(index<0)
//     return;
    
//     str[index]='A'+str[index]-'a';
//     upp(str,index-1);
// }

// int main() {
//    string str= "anurag";
//    upp(str,5);
//    cout<<str<<endl;
   
//     return 0;
// }


// //21.linear search
// //vid 57.
// #include <iostream>
// using namespace std;

// bool search(int arr[], int x,int n){
//     if(n<0)
//     return 0;
//     if(arr[n]==x)
//     return 1;
//     return search(arr,x,n-1);
// }

// int main() {
//     int arr[]={2,4,7,3,11,8,12};
//     cout<<search(arr,8,6)<<endl;
    
//     return 0;
// }


// //22.binary search [array in non incr. or non decr. form]
// //vid 57.
// #include <iostream>
// using namespace std;

// bool binary(int arr[],int start,int end,int X){
//     if(start>end)
//     return 0;
//     int mid= start+(end-start)/2;
//     if(arr[mid]==X)
//     return 1;
//     else if(arr[mid]<X)
//     return binary(arr,mid+1,end,X);
//     else
//     return binary(arr,start,mid-1,X);
// }

// int main() {
//     int arr[]={2,4,6,8,10,10,12};
//     cout<<binary(arr,0,6,10);
    
//     return 0;
// }


//23.time complexity
//vid 58.
// time complexity 1  for vexture if pass by reference and n if pass by value due whole array pass.
//time comp.- sum of all nodes.
// space comp.- sum of max. size nodes branch.
//both space & time find by recursive tree.


// //23.merge sort
// //vid 59.
// #include <iostream>
// #include<vector>
// using namespace std;

// void merge(int arr[],int start,int mid,int end){
//     vector<int>temp(end-start+1);
//     int left=start, right=mid+1, index=0;
    
//     while(left<=mid && right<=end){
//         if(arr[left]<=arr[right]){
//             temp[index]=arr[left];
//             left++,index++;
//         }
//         else{
//              temp[index]=arr[right];
//              right++,index++;
//         }
//     }
//     //left array not empty
//     while(left<=mid){
//         temp[index]=arr[left];
//         left++,index++;
//     }
//     //right array not empty
//     while(right<=end){
//         temp[index]=arr[right];
//         right++,index++;
//     }
//     //copy temp values in org. array
//     index=0;
//     while(start<=end){
//         arr[start]=temp[index];
//         start++,index++;
//     }
// }

// void mergeSort(int arr[],int start,int end){
//     if(start==end)
//     return;
//     int mid=start+(end-start)/2;
//     mergeSort(arr,start,mid);
//     mergeSort(arr,mid+1,end);
    
//     merge(arr,start,mid,end);
// }

// int main() {
//     int arr[]={6,3,1,2,8,9,10,7,3,10};
//     mergeSort(arr,0,9);
//     for(int i=0;i<10;i++)
//     cout<<arr[i]<<" ";
    
//     return 0;
// }
// //time comp.-nlogn
// //space comp-n


// //24.Quick sort.
// //vid 60.
// #include <iostream>
// using namespace std;

// int partition(int arr[],int start,int end){
//     int pos=start;
//     for(int i=start;i<=end;i++){
//         if(arr[i]<=arr[end]){
//         swap(arr[i],arr[pos]);
//         pos++;
//         }
//     }
//     return pos-1;
// }

// void quickSort(int arr[],int start,int end){
//     if(start>=end)
//     return;
//     int pivot=partition(arr,start,end);
//     quickSort(arr,start,pivot-1);
//     quickSort(arr,pivot+1,end);
// }

// int main() {
//     int arr[]={10,3,4,1,5,6,3,2,11,9};
//     quickSort(arr,0,9);
//     for(int i=0;i<10;i++)
//     cout<<arr[i]<<" ";

//     return 0;
// }
// // time comp- for avg case nlogn
// //           -for wrost case n*square
// // space comp-n
// // if arrayis alreaady sorted then it can say this is wrost case.