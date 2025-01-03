/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/BrowserEngineKit.framework/BrowserEngineKit
 */

@interface BELayerHierarchyHandle : NSObject <NSSecureCoding> {
    unsigned int  _contextID;
    int  _pid;
}

+ (id)handleWithXPCRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (id)createXPCRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
