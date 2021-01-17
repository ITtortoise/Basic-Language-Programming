var user = {
    firstName : "Sohag",
    lastName : "Sadaf",
    role : "Admin",
    loginCount : 4,
    facebookSingedIn : true,
    courseList : [],
    buyCourse : function (courseName){
       this.courseList.push(courseName);
    }, 
    getCourseCount : function(){
        return `${this.firstName} is enrolled in total of ${this.courseList.length} corurse`;
    }
};

user.buyCourse("Angular");
console.log(user.getCourseCount());
user.buyCourse("React JS");
console.log(user.getCourseCount());
