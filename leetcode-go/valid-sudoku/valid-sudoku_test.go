package valid_sudoku

import "testing"

func TestIsValidSudokuExample1(t *testing.T) {
	board := [][]byte{
		{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
		{'6', '.', '.', '1', '9', '5', '.', '.', '.'},
		{'.', '9', '8', '.', '.', '.', '.', '6', '.'},
		{'8', '.', '.', '.', '6', '.', '.', '.', '3'},
		{'4', '.', '.', '8', '.', '3', '.', '.', '1'},
		{'7', '.', '.', '.', '2', '.', '.', '.', '6'},
		{'.', '6', '.', '.', '.', '.', '2', '8', '.'},
		{'.', '.', '.', '4', '1', '9', '.', '.', '5'},
		{'.', '.', '.', '.', '8', '.', '.', '7', '9'}}
	ans := isValidSudoku(board)
	if ans != true {
		t.Error("right ans = ", true, ", current ans = ", ans)
	}
}

func TestIsValidSudokuExample2(t *testing.T) {
	board := [][]byte{
		{'8', '3', '.', '.', '7', '.', '.', '.', '.'},
		{'6', '.', '.', '1', '9', '5', '.', '.', '.'},
		{'.', '9', '8', '.', '.', '.', '.', '6', '.'},
		{'8', '.', '.', '.', '6', '.', '.', '.', '3'},
		{'4', '.', '.', '8', '.', '3', '.', '.', '1'},
		{'7', '.', '.', '.', '2', '.', '.', '.', '6'},
		{'.', '6', '.', '.', '.', '.', '2', '8', '.'},
		{'.', '.', '.', '4', '1', '9', '.', '.', '5'},
		{'.', '.', '.', '.', '8', '.', '.', '7', '9'}}
	ans := isValidSudoku(board)
	if ans != false {
		t.Error("right ans = ", false, ", current ans = ", ans)
	}
}

func TestIsValidSudokuTest0(t *testing.T) {
	board := [][]byte{
		{'.', '.', '5', '.', '.', '.', '.', '.', '6'},
		{'.', '.', '.', '.', '1', '4', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '9', '2', '.', '.'},
		{'5', '.', '.', '.', '.', '2', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '3', '.'},
		{'.', '.', '.', '5', '4', '.', '.', '.', '.'},
		{'3', '.', '.', '.', '.', '.', '4', '2', '.'},
		{'.', '.', '.', '2', '7', '.', '6', '.', '.'}}
	ans := isValidSudoku(board)
	if ans != true {
		t.Error("right ans = ", true, ", current ans = ", ans)
	}
}
