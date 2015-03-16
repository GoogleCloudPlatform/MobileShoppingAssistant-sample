/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2015 Google Inc.
 */

//
//  GTLShoppingAssistantCheckIn.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   shoppingAssistant/v1
// Description:
//   This is an API
// Classes:
//   GTLShoppingAssistantCheckIn (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLShoppingAssistantCheckIn
//

@interface GTLShoppingAssistantCheckIn : GTLObject
@property (retain) GTLDateTime *checkInDate;
@property (retain) NSNumber *key;  // longLongValue
@property (copy) NSString *placeId;
@property (copy) NSString *userEmail;
@end
