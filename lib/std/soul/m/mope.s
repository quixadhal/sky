(mope
  (pattern "<indirect:any-living> around <string>")
  (pattern "<indirect:any-living> <string>")
  (pattern "<indirect:any-living>")
  (pattern "about <string>")
  (pattern "<string>")
  (single
    (no-arguments
      (self "You mope about.")
      (rest "$mcname$ mopes about.")
    )
    (arguments
      (arguments quickly,slowly,into a nice puddle,carefully,
                 in anticipation,in ecstasy,seductively,submissively,
                 a little,cutely,carefully,scarily,towards the end of
                 a pole,without a care in the world)
      (self "You mope about $arg$.")
      (rest "$mcname$ mope about $arg$.")
    )
  )
  (targeted
    (no-arguments
      (self   "You mope around $hcname$.")
      (target "$mcname$ mopes around you.")
      (rest   "$mcname$ mopes around $hcname$.")
    )
    (arguments
      (arguments quickly,slowly,into a nice puddle,carefully,
                 in anticipation,in ecstasy,seductively,submissively,
                 a little,cutely,carefully,scarily,towards the end of
                 a pole,without a care in the world,scurrilously)
      (self "You mope around $hcname$ $arg$.")
      (target "$mcname$ mopes around you.")
      (rest "$mcname$ mope around $hcname$ $arg$.")
    )
  )
)

