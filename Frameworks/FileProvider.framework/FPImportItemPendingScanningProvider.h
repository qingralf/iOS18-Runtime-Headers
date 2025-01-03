/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPImportItemPendingScanningProvider : NSObject <NSSecureCoding> {
    NSFileProviderDiagnosticAttributesDescriptor * _diagnosticAttributes;
    NSString * _itemIdentifier;
    long long  _itemPendingScanningProviderEnumerationStatus;
    bool  _itemPendingScanningProviderHasMultiplePagesEnumeration;
    long long  _itemPendingScanningProviderNumberOfChildren;
    long long  _itemPendingScanningProviderNumberOfChildrenFailingCreation;
    long long  _itemPendingScanningProviderNumberOfChildrenPendingCreation;
    long long  _itemPendingScanningProviderRemovalOfDatalessBitStatus;
}

@property (nonatomic, copy) NSFileProviderDiagnosticAttributesDescriptor *diagnosticAttributes;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic) long long itemPendingScanningProviderEnumerationStatus;
@property (nonatomic) bool itemPendingScanningProviderHasMultiplePagesEnumeration;
@property (nonatomic) long long itemPendingScanningProviderNumberOfChildren;
@property (nonatomic) long long itemPendingScanningProviderNumberOfChildrenFailingCreation;
@property (nonatomic) long long itemPendingScanningProviderNumberOfChildrenPendingCreation;
@property (nonatomic) long long itemPendingScanningProviderRemovalOfDatalessBitStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)diagnosticAttributes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemIdentifier;
- (long long)itemPendingScanningProviderEnumerationStatus;
- (bool)itemPendingScanningProviderHasMultiplePagesEnumeration;
- (long long)itemPendingScanningProviderNumberOfChildren;
- (long long)itemPendingScanningProviderNumberOfChildrenFailingCreation;
- (long long)itemPendingScanningProviderNumberOfChildrenPendingCreation;
- (long long)itemPendingScanningProviderRemovalOfDatalessBitStatus;
- (id)json;
- (void)setDiagnosticAttributes:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setItemPendingScanningProviderEnumerationStatus:(long long)arg1;
- (void)setItemPendingScanningProviderHasMultiplePagesEnumeration:(bool)arg1;
- (void)setItemPendingScanningProviderNumberOfChildren:(long long)arg1;
- (void)setItemPendingScanningProviderNumberOfChildrenFailingCreation:(long long)arg1;
- (void)setItemPendingScanningProviderNumberOfChildrenPendingCreation:(long long)arg1;
- (void)setItemPendingScanningProviderRemovalOfDatalessBitStatus:(long long)arg1;

@end
