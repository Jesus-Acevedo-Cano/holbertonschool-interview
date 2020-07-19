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
            if i not in key:
                tof = i
            for j in boxes[i]:
                if i != j and j not in key:
                    key.append(j)
                if tof in key:
                    tof = 0
                if i + 1 not in key:
                    break
        key.sort()
    if tof != 0:
        return False
    else:
        return True
