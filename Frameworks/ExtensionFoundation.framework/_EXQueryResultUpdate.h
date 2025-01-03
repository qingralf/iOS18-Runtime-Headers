/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation
 */

@interface _EXQueryResultUpdate : _EXQueryResult {
    void removedUUIDs;
}

@property (nonatomic, readonly) NSSet *addedExtensions;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSSet *removedUUIDs;

- (void).cxx_destruct;
- (id)addedExtensions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAddedExtensions:(id)arg1 removedUUIDs:(id)arg2;
- (id)initWithAvailablility:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentExtensions:(id)arg1 updatedExtensions:(id)arg2;
- (id)initWithIdentities:(id)arg1;
- (id)removedUUIDs;

@end
