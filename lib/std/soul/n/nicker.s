(nicker
  (single
    (no-arguments
      (self "You nicker.")
      (rest "$mcname$ nickers.")
    )
    (arguments
      (arguments like a horse, gently, happily, slowly, stupidly,
                 like a ball of string, like Flicka,
                 back in black, like a stallion, with gusto, excitedly,
                 unhappily, sadly, skitishly, #)
      (self "You nicker $arg$.")
      (rest "$mcname$ nickers $arg$.")
    )
  )
)

