<?xml version="1.0" encoding="UTF-8"?><!-- Generated by PlexiLisp --><PlexilPlan xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:tr="extended-plexil-translator"><Node NodeType="NodeList"><NodeId>repeat3</NodeId><VariableDeclarations>
      <DeclareVariable>
        <Name>done</Name>
        <Type>Boolean</Type>
        <InitialValue>
          <BooleanValue>false</BooleanValue>
        </InitialValue>
      </DeclareVariable>
    </VariableDeclarations><EndCondition><BooleanVariable>done</BooleanVariable></EndCondition><NodeBody>
      <NodeList>
        <Node NodeType="Assignment"><NodeId>set</NodeId><RepeatCondition><BooleanValue>1</BooleanValue></RepeatCondition><NodeBody>
            <Assignment>
              <BooleanVariable>done</BooleanVariable>
              <BooleanRHS>
                <BooleanValue>1</BooleanValue>
              </BooleanRHS>
            </Assignment>
          </NodeBody></Node>
      </NodeList>
    </NodeBody></Node></PlexilPlan>