(step
  (pattern "[on] <indirect:any-living>")
  (pattern "<string>")
  (pattern "<string> [on] <indirect:any-living>")
  (pattern "[on] <indirect:any-living> <string>")
  (single
    (no-arguments
      (self "You do a little step dance.")
      (rest "$mcname$ does a little step dance.")
    )
    (arguments
      (arguments happily,professionally,in shame,on the head,quickly,
                 in joy,sadly)
      (self "You step dance $arg$.")
      (rest "$mcname$ step dances $arg$.")
    )
)  
  (targeted
   (arguments
    (arguments foot,frog,keyboard,code,head,body,toes)
      (self   "You step on $mhcname$ $arg$.")
      (target "$mcname$ steps on your $arg$.")
      (rest  "$mcname$ steps on $mhcname$ $arg$.")
    )
   )
 )  
