"""
Inventory
---------

Calculate and report the current inventory in a warehouse.

Assume the warehouse is initially empty.

The string, warehouse_log, is a stream of deliveries to
and shipments from a warehouse.  Each line represents
a single transaction for a part with the number of
parts delivered or shipped.  It has the form::

    part_id count

If "count" is positive, then it is a delivery to the
warehouse. If it is negative, it is a shipment from
the warehouse.

See :ref:`inventory-solution`.
"""

warehouse_log = """ soy_sauce        10
                    nori             5
                    ginger           12
                    soy_sauce        -3
                    soy_sauce        20
                    wasabi           40
                    nori             -4
                    ginger           -8
                """


# soultion 1

inventory = {}

trans = warehouse_log.strip().splitlines()

for tran in trans:
    item, count = tran.split()
    count = int(count)
    if item in inventory:
        inventory[item] += count
    else:
        inventory[item] = count
print(inventory)

# solution 2

inventory2 = {}

data = warehouse_log.split()
items = data[::2]
counts = data[1::2]

counts = [int(count) for count in counts]

for item, counts in zip(items, counts):
    if item in inventory2:
        inventory2[item] += count
    else:
        inventory2[item] = count

print(inventory2)
'''
# solution 3

data = warehouse_log.split()
items = data[::2]
counts = data[1::2]

inventory3 = {item:0 for item in items}

counts = [int(count) for count in counts]

for item, counts in zip(items, counts):
    inventory[item] += count