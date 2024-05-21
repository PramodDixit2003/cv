import tkinter as tk
from tkinter import messagebox
def winner():
	for i in range(3):
		if board[i][0]==board[i][1]==board[i][2]!="":
			return board[i][0]
	for i in range(3):
		if board[0][i]==board[1][i]==board[2][i]!="":
			return board[0][i]
	if board[0][0]==board[1][1]==board[2][2]!="":
		return board[0][0]
	if board[0][2] == board[1][1] == board[2][0] != "":
		return board[0][2]
def draw():
	for i in range(3):
		for j in range(3):
			if board[i][j]=="":
				return False
	return True
def reset():
	global cur_player,board
	board = [["" for _ in range(3)] for _ in range(3)]
	cur_player=0
	for i in range(3):
		for j in range(3):
			buttons[i][j].config(text="", state="normal")
            

def on_click(row,col):
	global cur_player
	buttons[row][col].config(text=players[cur_player], state="disabled", disabledforeground="blue")
	if board[row][col]=="":
		board[row][col]=players[cur_player]
		result=winner()
		if result:
			messagebox.showinfo("Winner", f"Player {result} wins!")
			reset()
		elif draw():
			messagebox.showinfo("Winner", f"Player {result} wins!")
			reset()
		else:
			cur_player=(cur_player+1)%2




root = tk.Tk()
root.title("Tic Tac Toe")
buttons=[]
for i in range(3):
	row=[]
	for j in range(3):
		button=tk.Button(root,width=10, height=8,command=lambda row=i, col=j:on_click(row,col))
		button.grid(row=i,column=j)
		row.append(button)
	buttons.append(row)


board = [["" for _ in range(3)] for _ in range(3)]
players=["X","O"]
cur_player=0
root.mainloop()
