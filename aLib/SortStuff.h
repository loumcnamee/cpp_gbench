#pragma once

enum class ItemStatus {

  UNKNOWN_STATUS,
  LOCAL,
  ON_LOAN,
  MISSING

};

// InventoryItem is the base class for all concrete objects which can exist in the user inventory 
class SortStuff
{
private:
  unsigned int _itemID;
  ItemStatus _status;


public:
  SortStuff();
  virtual ~SortStuff();
  void SlowSort(int a[], int i, int j);
};

