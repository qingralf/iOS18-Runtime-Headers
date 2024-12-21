/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFProcessedContacts : NSObject <NSSecureCoding> {
    WFContentAttributionSet * _attributionSet;
    WFCommunicationMethod * _communicationMethod;
    NSArray * _entries;
}

@property (nonatomic, readonly) WFContentAttributionSet *attributionSet;
@property (nonatomic, readonly) WFCommunicationMethod *communicationMethod;
@property (nonatomic, readonly) NSArray *entries;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributionSet;
- (id)communicationMethod;
- (id)contentCollection;
- (void)encodeWithCoder:(id)arg1;
- (id)entries;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntries:(id)arg1;
- (id)initWithEntries:(id)arg1 attributionSet:(id)arg2 communicationMethod:(id)arg3;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)getRecipientsWithPermissionRequestor:(id)arg1 completionHandler:(id /* block */)arg2;

@end