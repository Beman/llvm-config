//  single_statement_braces.cpp  -------------------------------------------------------//

// test some multi-statement examples to verify they don't get messed up by single-statement changes
if (x) { y = 1; z = 2; }

if (x)
{
  y = 1; z = 2;
}

if (x)
{
  y = 1;
  z = 2;
}


if (x) y = 1;

if (x)
y = 1;

if (x) { y = 1; }

if (x)
{ y = 1; }

if (x)
{
  y = 1;
}

if (x) {
  y = 1;
  }

if (x) {
  y = 1;
}

