/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPImportItemError : NSObject <NSSecureCoding> {
    NSFileProviderDiagnosticAttributesDescriptor * _diagnosticAttributes;
    NSError * _error;
    NSString * _itemIdentifier;
    long long  _retryCount;
}

@property (nonatomic, copy) NSFileProviderDiagnosticAttributesDescriptor *diagnosticAttributes;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) long long retryCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)diagnosticAttributes;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemIdentifier:(id)arg1 error:(id)arg2 retryCount:(long long)arg3;
- (id)itemIdentifier;
- (id)json;
- (long long)retryCount;
- (void)setDiagnosticAttributes:(id)arg1;

@end