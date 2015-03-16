/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2015 Google Inc.
 */

//
//  GTLShoppingAssistantCheckInCollection.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   shoppingAssistant/v1
// Description:
//   This is an API
// Classes:
//   GTLShoppingAssistantCheckInCollection (0 custom class methods, 1 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLShoppingAssistantCheckIn;

// ----------------------------------------------------------------------------
//
//   GTLShoppingAssistantCheckInCollection
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLShoppingAssistantCheckInCollection : GTLCollectionObject
@property (retain) NSArray *items;  // of GTLShoppingAssistantCheckIn
@end
