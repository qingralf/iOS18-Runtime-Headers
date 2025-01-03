/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFSiriAskEachTimeParameterState : NSObject <WFParameterState>

@property (nonatomic, readonly) NSArray *containedVariables;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <WFPropertyListObject> *legacySerializedRepresentation; /* unknown property attribute: ? */
@property (nonatomic, readonly) <WFPropertyListObject> *serializedRepresentation;
@property (readonly) Class superclass;

+ (Class)processingValueClass;

- (id)containedVariables;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)serializedRepresentation;

@end
