/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface CDBDefaultAccountInfo : NSObject <CDBAccountInfo> {
    NSArray * _accountUserAddresses;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)addressIsAccountOwner:(id)arg1;
- (bool)addressURLIsAccountOwner:(id)arg1;
- (id)initWithStore:(void*)arg1;

@end