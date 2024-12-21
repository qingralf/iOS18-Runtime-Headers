/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigAssetVariantQualifierWithPredicateObjC : FigAssetVariantQualifierObjC <NSSecureCoding> {
    NSPredicate * _predicate;
}

@property (nonatomic, readonly) NSPredicate *_predicate;

+ (bool)supportsSecureCoding;

- (id)_predicate;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end