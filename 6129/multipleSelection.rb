k = 0
j = 0

if ((k == 1) || (k == 2))
    j = 2 * k - 1
elsif ((k == 3) || (k == 5))
    j = 3 * k + 1
elsif (k == 4)
    j = 4 * k - 1
elsif ((k == 6) || (k == 7) || (k == 8))
    j = k - 2
end

print "j is #{j}\n"