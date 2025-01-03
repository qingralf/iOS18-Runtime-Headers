/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
 */

@interface _SVXExpressionParsingModel : NSObject {
    NSMutableDictionary * _aceViewByAceId;
    NSMutableDictionary * _aceViewIdByExpressionId;
    NSMutableArray * _parseableExpressions;
}

@property (nonatomic, retain) NSMutableDictionary *aceViewByAceId;
@property (nonatomic, retain) NSMutableDictionary *aceViewIdByExpressionId;
@property (nonatomic, retain) NSMutableArray *parseableExpressions;

- (void).cxx_destruct;
- (id)aceViewByAceId;
- (id)aceViewIdByExpressionId;
- (id)initWithParseableExpressions:(id)arg1 aceViewIdByExpressionId:(id)arg2 aceViewByAceId:(id)arg3;
- (id)parseableExpressions;
- (void)setAceViewByAceId:(id)arg1;
- (void)setAceViewIdByExpressionId:(id)arg1;
- (void)setParseableExpressions:(id)arg1;

@end
