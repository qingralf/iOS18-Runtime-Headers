/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STUniquedManagedObject : NSManagedObject

@property (nonatomic, readonly) NSUUID *sortKey;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

- (void)awakeFromInsert;
- (id)computeUniqueIdentifier;
- (id)dictionaryRepresentation;
- (void)updateUniqueIdentifier;

@end