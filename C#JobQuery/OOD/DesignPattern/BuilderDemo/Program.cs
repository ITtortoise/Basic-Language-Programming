using System;

namespace BuilderDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            var iceCream = new IceCreamBuilder().SetFlavour("Venilla")
                .SetCherry()
                .SetChocolete()
                .SetNut()
                .Build();


        }
    }
}
