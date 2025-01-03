/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

@interface TMLValueExpression : NSObject <TMLModelSerialize> {
    NSArray * _bindings;
    NSString * _expressionText;
}

@property (nonatomic, readonly) NSArray *bindings;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *expressionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)decode:(const struct ProtobufCMessage { struct ProtobufCMessageDescriptor {} *x1; unsigned int x2; struct ProtobufCMessageUnknownField {} *x3; }*)arg1;

- (void).cxx_destruct;
- (id)bindings;
- (void)encode:(struct ProtobufCMessage { struct ProtobufCMessageDescriptor {} *x1; unsigned int x2; struct ProtobufCMessageUnknownField {} *x3; }*)arg1;
- (id)expressionText;
- (id)initWithExpressionText:(id)arg1 bindings:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
