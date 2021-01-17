const names = ["Youtube","facebook","Instragram","Netflix","Amazon"];
for(const n of names){
    console.log(n);
}

const symbol = {
    yt : "Youtube",
    ig : "Instragram",
    fb : "Facebook",
    lco : "LearnCodeOnline.in"
};
for(const n in symbol){
    console.log(`Key is: ${n} and value is : ${symbol[n]}`);
}