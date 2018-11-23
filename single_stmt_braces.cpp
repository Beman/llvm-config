//  single_statement_braces.cpp  -------------------------------------------------------//

// test some multi-statement examples to verify they don't get messed up by single-statement changes

// case 1a
if (x) { y = 1; z = 2; }

// case 2a
if (x)
{
  y = 1; z = 2;
}


// case 3a
if (x)
{
  y = 1;
  z = 2;
}

// case 1
if (x) y = 1;

// case 2
if (x)
y = 1;

// case 3
if (x) { y = 1; }

// case 4
if (x)
{ y = 1; }

// case 5
if (x)
{
  y = 1;
}

// case 6
if (x) {
  y = 1;
  }
