/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSDomainAllowListSnapshot : NSObject <WBSRemotelyUpdatableDataSnapshot> {
    NSSet * _allowedDomains;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDomains:(id)arg1;
- (id)initWithSnapshotData:(id)arg1 error:(id*)arg2;
- (bool)isDomainAllowed:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)snapshotData;

@end
