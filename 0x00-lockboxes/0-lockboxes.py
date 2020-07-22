#!/usr/bin/python3
""" Lockboxes """


def canUnlockAll(boxes):
    """
        lockboxes function to unlock
        boxes (list): list of boxes
    """
    if boxes:
        key = [0]
        tof = 0
        for i in range(len(boxes)):
            for j in boxes[i]:
                if i != j and j not in key:
                    key.append(j)
                if i + 1 not in key:
                    break
        key.sort()
        if i not in key:
            tof = 1
        if tof != 0:
            return False
        else:
            return True
    else:
        return False
