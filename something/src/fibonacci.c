int fibonacci (int limit)
{
  if ((limit == 0) || (limit == 1))
    return 1;
  else
    return (fibonacci (limit - 1) + fibonacci (limit - 2));
}

