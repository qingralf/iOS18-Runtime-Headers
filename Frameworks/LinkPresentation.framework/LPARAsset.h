/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPARAsset : LPVisualMedia <NSSecureCoding> {
    NSURL * _temporaryFileURL;
}

@property (nonatomic, readonly, copy) LPARAssetProperties *properties;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createTemporaryFileAndWriteData;
- (id)_ensureTemporaryAssetURL;
- (id)_initWithARAsset:(id)arg1;
- (bool)_isSubstitute;
- (void)encodeWithCoder:(id)arg1;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (bool)isEqual:(id)arg1;

@end