#include <iostream>
using namespace std;

/*
example input:
5
4 9 2 4 1

example output:
1 2 4 4 9
*/

void bubble2(int arr[], int size){
  for(int i = 0; i<size-1; i++){
    bool flag = true;
    for(int j = size-1; j>i; j--){
      // cout<<"lol\n";
      if(arr[j]<arr[j-1]){
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        flag = false;
        // cout<<arr[j]<<arr[j-1]<<"\n";
      }
      // int j = size-1;
      // while(true){
      //   if(arr[j]<arr[j-1]){
      //     int temp = arr[j];
      //     arr[j] = arr[j-1];
      //     arr[j-1] = temp;
      //     continue;
      //   }
      //   break;
      // }
    }
      if(flag){
        break;
      }
  }
  return;
}


// //example!!!
// void bubble2(int arr[], int size){
//   for(int i = size-1; i>=0; i--){
//     bool flag = true;
//     for(int j = 0; j<i; j++){
//       cout<<"lol\n";
//       if(arr[j]<arr[j+1]){
//         int temp = arr[j];
//         arr[j] = arr[j+1];
//         arr[j+1] = temp;
//         flag = false;
//         cout<<arr[j]<<arr[j+1]<<"\n";
//       }
//       if(flag){
//         break;
//       }
//     }
//   }
//   return;
// }

//4 9 2 4 1

int main() {
  int size;
  cin>>size;
  int arr[10000];
  for(int i = 0; i<size; i++){
    cin>>arr[i];
  }
  // bubbles(arr, size);
  bubble2(arr, size);
  for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
  }
}
