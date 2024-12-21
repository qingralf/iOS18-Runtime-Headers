/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CascadeSets.framework/CascadeSets
 */

@interface CCDatabaseJoinedProvenance : NSObject {
    NSData * _contentData;
    NSData * _metaContentData;
    CCProvenanceRecord * _provenance;
}

@property (nonatomic, readonly) NSData *contentData;
@property (nonatomic, readonly) NSData *metaContentData;
@property (nonatomic, readonly) CCProvenanceRecord *provenance;

+ (id)joinedProvenanceFromDatabaseValueRow:(id)arg1;

- (void).cxx_destruct;
- (id)contentData;
- (id)initWithProvenance:(id)arg1 contentData:(id)arg2 metaContentData:(id)arg3;
- (id)metaContentData;
- (id)provenance;

@end