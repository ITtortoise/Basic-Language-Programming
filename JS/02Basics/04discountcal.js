var sellingPrice = 199;
var listingPrice = 799;
var discount =((listingPrice-sellingPrice)/listingPrice)*100;
var discountDisplay = Math.round(discount);
console.log("Discount is :"+discountDisplay+"%off");

var result =listingPrice > sellingPrice
console.log(typeof result);