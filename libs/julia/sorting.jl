function insertion_sort(A::Array{Integer,1})
    for j = 1:length(A)
        key = A[j]
        i = j - 1
        while i > 0 && A[i] > key
            A[i+1] = A[i]
            i = i - 1
        end
        A[i+1]=key
    end
end
function insertion_sort_test()
    sorted_data = [parse(Int,x) for x in split(readall("data/sorted_data"),['\n'])]
    unsorted_data = [parse(Int,x) for x in split(readall("data/unsorted_data"),['\n'])]
    insertion_sort(unsorted_data)
    if sorted_data != unsorted_data
        println("didn't pass")
    else
        println("passed")
    end
end
insertion_sort_test()