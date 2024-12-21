/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

@interface IMAssistantAccountDefaultDataSource : NSObject <IMAssistantAccountDataSource>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)countryCode;
- (bool)hasMessagingAccount;
- (id)imHandleWithID:(id)arg1;

@end