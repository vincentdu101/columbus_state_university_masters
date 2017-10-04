#
# Static vs Dynamic Scoping Program in Perl
#
# static scoping 
$test = "This is a test\n";

sub printMessage {
    return $test;
}

sub staticScoping {
    my $test = "This is a new message, but will be ignored";
    return printMessage();
}

print staticScoping();

# dynamic scoping 
sub dynamicScoping {
    local $test = "This is a new message and will be used";
}

print dynamicScoping();
