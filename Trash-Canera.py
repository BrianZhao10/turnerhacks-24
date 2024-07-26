import roboflow

rf = roboflow.Roboflow(api_key='JKkwgi82Fw5soWd1eyfg')

project = rf.workspace().project("trash-collection-wsdcl")
model = project.version("2").model

# Optionally, change the confidence and overlap thresholds
# Values are percentages
model.confidence = 50
model.overlap = 25

# Predict on a local image
prediction = model.predict("IMG_7212.jpg")

# Plot the prediction in an interactive environment
prediction.plot()
