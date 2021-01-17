const myStates =[
    "Dhaka",
    "Rajshahi",
    "Khulna",
    "Chittagong",
    "Mymansing",
    234,
    "chapaiNawabgong"
]

// for(let i =0 ;i<myStates.length;i++){
//     console.log(myStates[i]);
// }
// for(let i =0 ;i<myStates.length;i++){
//     if(typeof myStates[i]!=="string")break;
//     console.log(myStates[i]);
//}
let l = myStates.length,j=0;
// while(j<l){
//    console.log(myStates[j]);
//    j++;
// }

// do{
//     console.log(myStates[j]);
//    j++;
// }while(j<l);

myStates.forEach((s) => (console.log(s)));