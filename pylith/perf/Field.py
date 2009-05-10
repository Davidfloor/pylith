#!/usr/bin/env python

from Memory import Memory

class Field(Memory):
  """
  Mesh object for holding field memory and performance information.
  """
  def __init__(self, label = '', size = 0, chartSize = 0):
    """
    Constructor.
    """
    self.label     = label
    self.size      = size
    self.chartSize = chartSize
    return

  def tabulate(self, memDict):
    """
    Tabulate memory use.
    """
    # Here we have data + atlas + bc
    memDict[self.label] = (self.sizeDouble * self.size) + (2 * self.sizeInt * self.chartSize) + (2 * self.sizeInt * self.chartSize)
    return

if __name__ == '__main__':
  print 'Memory:',Material('rock', 35).tabulate()