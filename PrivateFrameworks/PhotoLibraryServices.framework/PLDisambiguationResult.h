/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDisambiguationResult : NSObject {
    PLDisambiguation * _disambiguation;
    NSArray * _genericLocationTuples;
    NSArray * _locationNames;
    NSArray * _personLookupIdentifiers;
}

@property (nonatomic, readonly) PLDisambiguation *disambiguation;
@property (nonatomic, readonly) NSArray *genericLocationTuples;
@property (nonatomic, readonly) NSArray *locationNames;
@property (nonatomic, readonly) NSArray *personLookupIdentifiers;

- (void).cxx_destruct;
- (id)description;
- (id)disambiguation;
- (id)genericLocationTuples;
- (id)initWithDisambiguation:(id)arg1 personLookupIdentifiers:(id)arg2 locationNames:(id)arg3 genericLocationTuples:(id)arg4;
- (id)locationNames;
- (id)personLookupIdentifiers;

@end
