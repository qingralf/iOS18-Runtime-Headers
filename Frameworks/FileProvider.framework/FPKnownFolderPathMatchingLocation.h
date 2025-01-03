/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPKnownFolderPathMatchingLocation : NSFileProviderKnownFolderLocation <NSSecureCoding> {
    NSString * _filename;
    NSString * _parentItemIdentifier;
}

@property (nonatomic, readonly, copy) NSString *filename;
@property (nonatomic, readonly, copy) NSString *parentItemIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asPathMatchingLocation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filename;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentItemIdentifier:(id)arg1 filename:(id)arg2;
- (id)parentItemIdentifier;

@end
