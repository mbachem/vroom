#!/bin/bash

# Fz:0 doing 3 shipments alone
curl --header "Content-Type:application/json" -d @problem_1.json http://solver.vroom-project.org > solution_1.json
cat solution_1.json | jq '' > solution_1_frmt.json

# Fz:1 doing 3 shipments alone
curl --header "Content-Type:application/json" -d @problem_2.json http://solver.vroom-project.org > solution_2.json
cat solution_2.json | jq '' > solution_2_frmt.json

# Fz:0 plus Fz:1 sharing shipments
curl --header "Content-Type:application/json" -d @problem_3.json http://solver.vroom-project.org > solution_3.json
cat solution_3.json | jq '' > solution_3_frmt.json

curl --header "Content-Type:application/json" -d @problem_4.json http://solver.vroom-project.org > solution_4.json
cat solution_4.json | jq '' > solution_4_frmt.json