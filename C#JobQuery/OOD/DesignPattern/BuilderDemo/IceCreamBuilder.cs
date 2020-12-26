using System;
using System.Collections.Generic;
using System.Text;

namespace BuilderDemo
{
    public class IceCreamBuilder
    {
        private readonly IceCream _iceCream;

        public IceCreamBuilder()
        {
            _iceCream = new IceCream();
        }
        public IceCreamBuilder SetFlavour(string flavour)
        {
            _iceCream.Flavour = flavour;
            return this;
        }
        public IceCreamBuilder SetNut()
        {
            _iceCream.HasNut = true;
            return this;
        }
        public IceCreamBuilder SetCherry()
        {
            _iceCream.HasCherry = true;
            return this;
        }
        public IceCreamBuilder SetChocolete()
        {
            _iceCream.HasChocolet = true;
            return this;
        }
        public IceCream Build()
        {
            return _iceCream;
        }
    }
}
